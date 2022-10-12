#pragma once
#ifndef PRIORITY_QUEUE_RAW_H
#define PRIORITY_QUEUE_RAW_H
#include <iostream>
#include <initializer_list>
#include <cstddef>
#include <utility>
#include <stdexcept>
class QueueR {
	struct Node {
		int value;
		Node* next;
	};

public:
	//Creating and deliting QueueR
	QueueR();
	~QueueR();
	QueueR(QueueR&) = delete;
	QueueR(QueueR&&) = default;
	QueueR(const std::vector<int>& list);

	//Operations with elemats of queue
	void Push(const int& value);
	void Pop();
	const int& top() const;

	//Getting data about queue
	inline bool isEmpty() const {
		return size == 0;
	}
	inline size_t Size() const {
		return size;
	}

	void Clear();
	QueueR& operator=(QueueR&&) = default;
	QueueR& operator=(const QueueR&) = delete;


private:
	Node* head = nullptr;
	Node* tail = nullptr;
	size_t size = 0;
};