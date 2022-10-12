#include <QueueR/QueueR.h>

QueueR::QueueR() {
	size = 0;
	this->head = nullptr;
}


QueueR::~QueueR() {
	Clear();
}


QueueR::QueueR(const std::vector<int>& list) {
	for (int elem : list) {
		Push(elem);
	}
}


void QueueR::Push(const int& value)
{
	if (isEmpty())
	{
		head = new Node{ value, nullptr };
		size++;
		return;
	}
	else
	{
		if (value < head->value) {
			head = new Node{value, head };
			size++;
			return;
		}
		Node* counter = head;

		while ((counter->next != nullptr) && (counter->next->value < value)) {
			counter = counter->next;
		}

		counter->next = new Node{ value, counter->next };
		size++;
	}
}
void QueueR::Pop() {
	if (isEmpty()) {
		throw std::length_error("Queue is empty!");
	}
	else
	{
		if (head != nullptr) {
			head = head->next;
		}
		size--;
	}
}

void QueueR::Clear() {
	while (size > 0) {
		Pop();
	}
}

const int& QueueR::top() const {
	if (isEmpty()) {
		throw std::length_error("Queue is empty!");
	}
	else
	{
		return head->value;
	}
}