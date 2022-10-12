#pragma once

#include <iostream>
#include <initializer_list>
#include <cstddef>
#include <utility>
#include <stdexcept>
class QueueP {

public:
	//Creating and deliting QueueR
	QueueP();
	~QueueP();
	QueueP(QueueP&) = delete;
	QueueP(QueueP&&) = default;
	QueueP(const std::vector<int>& list);

	//Operations with elemats of stack(declaration)
	void Push(const int& value);
	void Pop();
	const int& top() const;

	//Getting data about stack
	inline bool isEmpty() const {
		return size == 0;
	}
	inline size_t Size() const {
		return size;
	}

	void Clear();
	QueueP& operator=(QueueP&&) = default;
	QueueP& operator=(const QueueP&) = delete;


private:
	class Node {
	private:
		int value = 0;
		std::unique_ptr<Node> next = nullptr;

	public:
		Node(int data, std::unique_ptr<Node> next);
		Node(const Node&) = delete;
		Node(Node&&) = default;
		Node& operator=(const Node&) = delete;
		Node& operator=(Node&&) = default;
		~Node() = default;
		friend class QueueP;
	};

	std::unique_ptr<Node> head = nullptr;
	size_t size = 0;

};