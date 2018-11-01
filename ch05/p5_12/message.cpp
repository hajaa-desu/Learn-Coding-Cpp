#include <iostream>
#include <string>


#include "message.h"

Message::Message(std::string to, std::string from)
	: recipient(to), sender(from) {
	/* TODO: set timestamp */
}

void Message::append(std::string more_message) {
	message += more_message;
}

std::string Message::to_string() const {
	return "From: " + sender + "\nTo: " + recipient + "\nMessage: " + message;
}

void Message::print() const {
	std::cout << to_string(); 
}