//
// Created by trungnxt on 28/10/2025.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

class Message {
public:
    string text_;
    int id_;
    static int id_counter_;

    Message() {}
    Message(const string& text): text_(text), id_(id_counter_++) {}
    const string& get_text() const{
        return text_;
    }
    bool operator<(const Message& other) const {
        return this->id_ < other.id_;
    }
};

int  Message::id_counter_ = 0;

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        return Message(text);
    }
};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
        // simulates the unpredictable network, where sent messages might arrive in unspecified order
        shuffle(messages.begin(), messages.end(), default_random_engine{});
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}
