#pragma once
#include <initializer_list>
#include <cstddef>
#include <utility>
#include <stdexcept>

template<typename T>
class Priority_queue {
	struct Node {
		T value;
		Node* next;
	};

public:
	//Creating and deliting stack(declaration)
	Priority_queue() = default;
	~Priority_queue();
	Priority_queue(const Priority_queue<T>& stc);
	Priority_queue(Priority_queue<T>&& stc);
	Priority_queue(const std::initializer_list<T>& list);

	//Operations with elemats of stack(declaration)
	void Push(const T& value);
	void Pop();
	T& Get() const;

	//Getting data about stack
	inline bool Empty() const {
		return size == 0;
	}
	inline size_t Size() const {
		return size;
	}
	inline friend Node* Get_Head(const Priority_queue<T>& stc) {
		return stc.head;
	}
	inline friend Node* Get_Tail(const Priority_queue<T>& stc) {
		return stc.tail;
	}

	void Clear();

	//Logical operations(declaration)
	bool operator==(const Stack<T>& stc) const;
	inline bool operator!=(const Stack<T>& stc) const {
		return !(*this == stc);
	}

private:
	Node* head = nullptr;
	Node* tail = nullptr;
	size_t size = 0;
};

//Creating and deliting stack(defenition)
template <typename T>
inline typename Priority_queue<T>::Node* Get_Head(const Priority_queue<T>& stc);

template <typename T>
inline typename Priority_queue<T>::Node* Get_Tail(const Priority_queue<T>& stc);

template <typename T>
Priority_queue<T>::~Priority_queue() {
	Clear();
}

template <typename T>
Priority_queue<T>::Priority_queue(const Priority_queue<T>& que) {
	*this = que;
}

template <typename T>
Priority_queue<T>::Priority_queue(Priority_queue<T>&& que) {
	head = que.head;
	tail = que.tail;
	size = que.size;
	que.head = nullptr;
	que.tail = nullptr;
	que.size = 0;
}

template <typename T>
Priority_queue<T>::Priority_queue(const std::initializer_list<T>& list) {
	for (auto& element : list) {
		Push((T)element);
	}
}

//Operations with elemats of stack(definition)
template <typename T>
void Priority_queue<T>::Push(const T& value) {
	Node* p = new Node;      
	p->value = x; p->next = NULL; 
	Node* v = new Node;      
	Node* p1 = new Node;     
	Node* p2 = new Node;     
	int i = 0;           
	if (Empty()) head = tail = p;     
	else {
		p2 = head;
		p1 = head;
		while (p1 != NULL) 
		{
			if (i == 1)
			{
				if (x <= p1->value) 
				{
					v->value = x; 
					v->next = p1; 
					p2->next = v; 
					return;        
				}
				p2 = p2->next;     
			}
			else
			{
				if (x <= p1->value) 
				{
					v->value = x;    
					v->next = p1;  
					head = v;    
					return;
				}
			}
			p1 = p1->next;   
			i = 1;
		}
		if (p1 == NULL) 
		{
			tail->next = p; 
			tail = p;       
		}
	}
	size++;
}

template <typename T>
void  Priority_queue<T>::Pop() {
	if (Empty()) {
		throw std::length_error("Priority_queue is empty!");
	}
	Node* q = head;
	head = head->next;
	delete q;
	--size;
}

template <typename T>
T& Priority_queue<T>::Get() const {
	if (head == nullptr) {
		throw std::length_error("Thare are no elements in Priority_queue");
	}
	return head->value;
}

//Operations with hole stack(definition)

template <typename T>
void Priority_queue<T>::Clear() {
	while (size > 0) {
		Pop();
	}
}

//Logical operations(definition)


template <typename T>
bool Priority_queue<T>:: operator==(const Stack<T>& stc) const {
	if (size != stc.size) {
		return false;
	}
	Node* q1 = head;
	Node* q2 = stc.head;
	while (q1 != nullptr) {
		if (q1->value != q2->value) {
			return false;
		}
		q1 = q1->next;
		q2 = q2->next;
	}
	return true;
}*/