#ifndef MAILBOX_H
#define MAILBOX_H

#include <stdlib.h>
#include <string>


#include "message.h"


class Mailbox {

public:
	/** Constructor 
	*/
	Mailbox();

	/** Add new message content to all_message.

	@param m A message object.
	*/
	void add_message(Message m);

	/** Get the ith message.

	@param i index of message. 
	@return The ith message if exist, an empty message otherwise.
	*/
	Message get_message(int i) const; 

	/** Removes the ith message. 
	*/
	void remove_message(int i); 

private:
	std::string all_message;
	int count_message;
};
#endif /* MAILBOX_H */