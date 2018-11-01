#include "mailbox.h"


Mailbox::Mailbox() {
	count_message = 0;
}

void Mailbox::add_message(Message m) {
	all_message += m.to_string();
}

Message Mailbox::get_message(int i) const {

}
