
add_library(priority_queue OBJECT G:\НАСТЯ "РС\Институт\3семестр\Theory of programming\Bordukova_A_A\prj.lab\priority_queue\priority_queue.cpp"
"G:\НАСТЯ РС\Институт\3семестр\Theory of programming\Bordukova_A_A\prj.lab\priority_queue\priority_queue.h")

add_executable(priority_queue_test priority_queue_test.cpp)
target_link_libraries(priority_queue_test priority_queue)
