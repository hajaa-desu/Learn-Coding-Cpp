#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

class Message {
public:
	/* Constructor. 

	Sets timestamp to current time

	@param to To email
	@param from From email
	*/
	Message(std::string to, std::string from);

	/** Append string to message body.

	@param more_message The message to be appended
	*/
	void append(std::string more_message);
	
	/** Makes the message into one long string with meta data. 
	*/
	std::string to_string() const; 

	/** Prints the full message. 
	*/
	void print() const;
private:
	std::string recipient;
	std::string sender; 
	std::string message; 
};

#endif /* MESSAGE_H */