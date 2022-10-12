#include <QueueP/QueueP.h>

QueueP::Node::Node(int value, std::unique_ptr<Node> next) {
	this->value = value;
	this->next = std::move(next);
}


QueueP::QueueP() {
	size = 0;
	this->head = nullptr;
}


QueueP::~QueueP() {
	Clear();
}


QueueP::QueueP(const std::vector<int>& list) {
	for (int elem : list) {
		Push(elem);
	}
}


void QueueP::Push(const int& value)
{
	if (isEmpty())
	{
		head = std::make_unique<Node>(value, nullptr);
		size++;
		return;
	}
	else
	{
		if (value < head->value) {
			head = std::make_unique<Node>(value, std::move(head));
			size++;
			return;
		}
		Node* counter = head.get();

		while ((counter->next != nullptr) && (counter->next->value < value)) {
			counter = counter->next.get();
		}

		std::unique_ptr<Node> nest = std::make_unique<Node>(value, std::move(counter->next));
		counter->next = std::move(nest);

		size++;
	}
}
void QueueP::Pop() {
	if (isEmpty()) {
		throw std::length_error("Queue is empty!");
	}
	else
	{
		if (head != nullptr) {
			head = std::move(head->next);
		}
		size--;
	}
}

void QueueP::Clear() {
	while (size > 0) {
		Pop();
	}
}

const int& QueueP::top() const {
	if (isEmpty()) {
		throw std::length_error("Queue is empty!");
	}
	else
	{
		return head->value;
	}
}