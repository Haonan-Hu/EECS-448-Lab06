#include "Test.h"
#include <string>
#include <stdexcept>

void Test::runTests()
{
  testEmpty();
  testEnqueueNotEmpty();
  testPeekFrontEmpty();
  testEnqueue5();
  testEnqueueChar();
  testEnqueueTwice();
  testDequeueEmpty();
  testDequeueOnce();
  testDequeueTwice();
  testPeekFrontDequeue();
}

void Test::testEmpty()
{
  Queue qTest;
  if(qTest.isEmpty())
  {
    std::cout << "Newly created Queue is empty: PASSED\n";
  }
  else
  {
    std::cout << "Newly created Queue is empty: FAILED\n";
  }
}

void Test::testEnqueueNotEmpty()
{
  Queue qTest;
  qTest.enqueue(1);
  if(!qTest.isEmpty())
  {
    std::cout << "Enqueing a value makes the Queue not empty: PASSED\n";
  }
  else
  {
    std::cout << "Enqueing a value makes the Queue not empty: FAILED\n";
  }
}

void Test::testPeekFrontEmpty()
{
  Queue qTest;
  try
  {
    qTest.peekFront();
    std::cout << "Peek Font of an empty Queue: FAILED\n";
  }
  catch(std::runtime_error &rte)
  {
    std::cout << rte.what() << '\n';
    std::cout << "Peek Font of an empty Queue: PASSED\n";
  }
}

void Test::testEnqueue5()
{
  Queue qTest;
  qTest.enqueue(5);

  if(qTest.peekFront() == 5)
  {
    std::cout << "Enqueue 5 on empty queue then peekFront returns 5: PASSED\n";
  }
  else
  {
    std::cout << "Enqueue 5 on empty queue then peekFront returns 5: FAILED\n";
  }
}

void Test::testEnqueueChar()
{
  Queue qTest;
  qTest.enqueue('c');
void testPeekFrontDequeue();
  if(qTest.isEmpty())
  {
    std::cout << "Enqueue a character on empty queue: PASSED\n";
  }
  else
  {
    std::cout << "Enqueue a character on empty queue: FAILED\n";
  }
}

void Test::testEnqueueTwice()
{
  Queue qTest;
  qTest.enqueue(1);
  qTest.enqueue(2);
void testPeekFrontDequeue();
  if(qTest.peekFront() == 1)
  {
    std::cout << "Enqueue 1 and 2 on empty queue then peekFront return 2: PASSED\n";
  }
  else
  {
    std::cout << "Enqueue 1 and 2 on empty queue then peekFront return 2: FAILED\n";
  }
}

void Test::testDequeueEmpty()
{
  Queue qTest;
  qTest.enqueue(1);
  qTest.dequeue();

  if(qTest.isEmpty())
  {
    std::cout << "Enqueue 1 on empty queue then dequeue: PASSED\n";
  }
  else
  {
    std::cout << "Enqueue 1 on empty queue then dequeue: FAILED\n";
  }
}

void Test::testDequeueOnce()
{
  Queue qTest;
  qTest.enqueue(1);
  qTest.enqueue(2);
  qTest.dequeue();

  if(qTest.peekFront() == 2)
  {
    std::cout << "Enqueue 1 and 2 on empty queue then dequeue once: PASSED\n";
  }
  else
  {
    std::cout << "Enqueue 1 and 2 on empty queue then dequeue once: FAILED\n";
  }
}

void Test::testDequeueTwice()
{
  Queue qTest;
  qTest.enqueue(1);
  qTest.enqueue(2);

  qTest.dequeue();
  if(qTest.peekFront() == 2)
  {
    std::cout << "Dequeue 1: PASSED\n";
  }
  else
  {
    std::cout << "Dequeue 1: FAILED\n";
  }

  qTest.dequeue();
  if(qTest.isEmpty())
  {
    std::cout << "Enqueue 1 and 2 on empty queue then dequeue twice: PASSED\n";
  }
  else
  {
    std::cout << "Enqueue 1 and 2 on empty queue then dequeue twice: FAILED\n";
  }
}

void Test::testPeekFrontDequeue()
{
  Queue qTest;
  bool checkE1 = false;
  bool checkE2 = false;
  bool checkE3 = false;
  bool checkE4 = false;
  qTest.enqueue(1);
  qTest.enqueue(2);
  qTest.enqueue(3);
  qTest.enqueue(4);

  if(qTest.peekFront() == 1)
  {
    checkE1 = true;
    qTest.dequeue();
  }
  if(qTest.peekFront() == 2)
  {
    checkE2 = true;
    qTest.dequeue();
  }
  if(qTest.peekFront() == 3)
  {
    checkE3 = true;
    qTest.dequeue();
  }
  if(qTest.peekFront() == 4)
  {
    checkE4 = true;
    qTest.dequeue();
  }

  if(checkE1 && checkE2 && checkE3 && checkE4)
  {
    std::cout << "Enqueue 1 to 4 on empty queue then peekFront each time after dequeue: PASSED \n";
  }
  else
  {
    std::cout << "Enqueue 1 to 4 on empty queue then peekFront each time after dequeue: FAILED \n";
  }
}
