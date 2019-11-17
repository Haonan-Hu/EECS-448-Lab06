#ifndef TEST_H
#define TEST_H

#include "Node.h"
#include "Queue.h"
#include <iostream>

class Test
{
  public:
    /**
  	*	@post run all tests from private
  	*	@param none
  	*/
    void runTests();

  private:
    /**
  	*	@post Test newly created queue is empty
  	*	@param none
  	*/
    void testEmpty();

    /**
  	*	@post Test enqueue a newly created queue is not empty
  	*	@param none
  	*/
    void testEnqueueNotEmpty();

    /**
  	*	@post Peek Font of an empty Queue
  	*	@param none
  	*/
    void testPeekFrontEmpty();

    /**
  	*	@post Enqueue 5 on empty queue then peekFront returns 5
  	*	@param none
  	*/
    void testEnqueue5();

    /**
  	*	@post Enqueue a character on empty queue then peekFront should fail
  	*	@param none
  	*/
    void testEnqueueChar();

    /**
  	*	@post Enqueue 1 and 2 on empty queue then peekFront return 2
  	*	@param none
  	*/
    void testEnqueueTwice();

    /**
  	*	@post empty queue then dequeue
  	*	@param none
  	*/
    void testDequeueEmpty();

    /**
  	*	@post Enqueue 1 and 2 on empty queue then dequeue once
  	*	@param none
  	*/
    void testDequeueOnce();

    /**
  	*	@post Enqueue 1 and 2 on empty queue then dequeue twice
  	*	@param none
  	*/
    void testDequeueTwice();
    /**
    *	@post Enqueue 1 to 4 on empty queue then peekFront each time after dequeue
    *	@param none
    */
    void testPeekFrontDequeue();
};
#endif
