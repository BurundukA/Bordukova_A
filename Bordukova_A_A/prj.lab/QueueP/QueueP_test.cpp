#include <QueueP/QueueP.h>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include <vector>
#include <algorithm>


TEST_CASE("Testing QueueP") {

    QueueP a = QueueP();
    CHECK(a.isEmpty());
    CHECK_THROWS_WITH(a.Pop(), "Queue is empty!");
    CHECK_THROWS_WITH(a.top(), "Queue is empty!");
    a.Push(7);
    CHECK(a.Size() == 1);
    a.Push(12);
    a.Push(1);
    CHECK(a.top() == 1);


    std::vector<int> v = { 43, 89, 74, 22 };
    QueueP b(v);
    CHECK(b.top() == 22);
    CHECK(b.Size() == 4);
    for (size_t i = 0; i < v.size(); ++i) {
        b.Pop();
    }
    CHECK(b.isEmpty());
    CHECK_THROWS_WITH(b.Pop(), "Queue is empty!");


    std::vector<int> v1 = { 43, 89, 74, 22,12, 653, 46, 78234 ,234 };
    QueueP c(v1);
    CHECK(c.top() == 12);
    CHECK(c.Size() == 9);
    c.Pop();
    CHECK(c.Size() == 8);
    c.Pop();
    CHECK(c.top() == 43);

}