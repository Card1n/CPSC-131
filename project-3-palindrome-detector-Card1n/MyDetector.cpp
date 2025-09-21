/**
	name: Cardin Phan
	CWID: 884699653
	Email: Phancardin@csu.fullerton.edu
*/

/**
 * TxODO: Complete these class definitions
 */


/// Starter includes (yw)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"


//
namespace CPSC131::PalindromeDetector
{
	/// Your welcome
	MyDetector::MyDetector() {}
	
	//
	bool MyDetector::isPalindrome(std::string s)
	{
		//	TxODO: Your code here

		CPSC131::MyStack<char> stack;
		CPSC131::MyQueue<char> queue;

		//int wordsize{0};

		for (char iterator : s){
			if (std::isalpha(iterator)) {
				char lowercase = std::tolower(iterator);
				stack.push(lowercase);
				queue.enqueue(lowercase);
			}
		}

		while (!stack.empty()){
		if (stack.top() != queue.front()) {
				return false;
			}

			stack.pop();
			queue.dequeue();
		}

		return true;

	}
}






