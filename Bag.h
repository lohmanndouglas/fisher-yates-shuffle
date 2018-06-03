/*
 * Bag.h
 *
 *  Created on: Jun 1, 2018
 *      Author: lohmann
 */

#ifndef BAG_H_
#define BAG_H_
#include <deque>
#include <iostream>

using namespace std;

class Bag {
private:
	deque<int> deck;
	deque<int> shuffled_deck;
public:
	Bag();
	Bag(deque<int> numbers);
	void print_bag();
	void shuffle();
	void shuffle_p();
	void re_shuffle();
	void re_shuffle_p();
	virtual ~Bag();
};

#endif /* BAG_H_ */
