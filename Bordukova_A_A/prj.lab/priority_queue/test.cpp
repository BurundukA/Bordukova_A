#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "priority_queue.h"


TEST_CASE_TEMPLATE("Testing constructors and ==", Val, int, double, float, long long, unsigned long long) {
0	Priority_queue<Val> a;
	CHECK(a.Size() == 0);
	CHECK(Get_Head(a) == nullptr);
	CHECK(Get_Tail(a) == nullptr);

	Priority_queue<Val> b(a);
	CHECK(b.Size() == a.Size());
	CHECK(b == a);

	Priority_queue<Val> c(a);
	CHECK(c.Size() == b.Size());
	CHECK(c == b);

	Priority_queue<Val> d(std::initializer_list<Val>{ 28, 36, 84, 76 });
	CHECK(d != b);
	CHECK_FALSE(d == a);
	CHECK(d.Size() != a.Size());
}

TEST_CASE_TEMPLATE("Testing Priority_queue methods", Val, int, double, float, long long, unsigned long long) {
	Priority_queue<Val> e(std::initializer_list<Val>{ 88, (Val)65.23, (Val)25.63, (Val)45.418  });
	Priority_queue<Val> e_copy(e);
	e.Push((Val)-129.3);
	CHECK(e != e_copy);
	CHECK_FALSE(e == e_copy);
	CHECK(e.Size() == e_copy.Size() + 1);
	CHECK(e.Get() == (Val)-129.3);
	CHECK(Get_Head(e)->value == (Val)-129.3);
	CHECK(Get_Head(e)->next->value == Get_Head(e_copy)->value);
	e.Pop();
	e.Pop();
	CHECK(e.Size() == 3);

	Priority_queue<Val> d(std::initializer_list<Val>{ 28, 36, 84, 76 });
	Priority_queue<Val> d_copy(d);
	e = e_copy;
	d = d_copy;
	CHECK(e == e_copy);
	CHECK(d == d_copy);
	e.Swap(d);
	CHECK(e == d_copy);
	CHECK(d == e_copy);
	d.Swap(e);
	 
	e.Merge(d);
	CHECK(e == Stack<Val>(std::initializer_list<Val>{ 28, 36, 84, 76, 88, (Val)65.23, (Val)25.63, (Val)45.418 }));
	CHECK(e.Size() == e_copy.Size() + d_copy.Size());
	CHECK(e.Get() == (Val)84);
	CHECK(Get_Head(e)->value == Get_Head(e_copy)->value);
	CHECK(Get_Tail(e)->value == Get_Tail(d_copy)->value);

	Priority_queue<Val> f(std::initializer_list<Val>{ 13, 98, 133, 421 });
	Priority_queue<Val> f_copy(std::move(f));
	CHECK(f.Size() == 0);
	CHECK(f_copy.Size() == 4);
	CHECK(Get_Head(f) == nullptr);
	CHECK(Get_Tail(f) == nullptr);
	CHECK(f_copy.Get() == 421);

	f_copy.Clear();
	CHECK(f_copy.Size() == 0);
	CHECK(f_copy == Stack<Val>());
	CHECK_THROWS_WITH(f_copy.Pop(), "Priority_queue is empty!");
	CHECK_THROWS_WITH(f_copy.Get(), "Thare are no elements in priority_queue!");

	Priority_queue<Val> g(std::initializer_list<Val>{ 198, 258, 323, 594 });
	Priority_queue<Val> g_copy = std::move(g);
	CHECK(g.Size() == 0);
	CHECK(g_copy.Size() == 4);
	CHECK(Get_Head(g) == nullptr);
	CHECK(Get_Tail(g) == nullptr);
	CHECK(g_copy.Get() == 594);
	CHECK_THROWS_WITH(g.Pop(), "Priority_queue is empty!");
}