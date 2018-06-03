/*
 * Bag.cpp
 *
 *  Created on: Jun 1, 2018
 *      Author: lohmann
 */

#include "Bag.h"

Bag::Bag() : deck(), shuffled_deck() {}

Bag::Bag(deque<int> numbers) : deck(numbers), shuffled_deck(numbers) {}

void Bag::print_bag(){
	std::cout << "The bag contains: " << std::endl;

	std::deque<int>::iterator it = shuffled_deck.begin();

	while(it != shuffled_deck.end())
		std::cout << ' ' << *it++;

	std::cout << endl;
}

// Original method by Fisher and Yates
void Bag::shuffle(){
	std::deque<int> deck_backup = shuffled_deck;
	srand(time(NULL));
	int choose = 0;
	shuffled_deck.clear();
	while(!deck_backup.empty()){
		choose = rand() % deck_backup.size();
		shuffled_deck.push_back(deck_backup.at(choose));
		deck_backup.erase(deck_backup.begin()+choose);
	}
}
// Moderm method by Richard Durstenfeld
void Bag::shuffle_p(){
	std::deque<int> deck_backup = shuffled_deck;
	srand(time(NULL));
	int choose = 0;
	shuffled_deck.clear();
	while(!deck_backup.empty()){
		choose = rand() % deck_backup.size();
		shuffled_deck.push_back(deck_backup.at(choose));
		deck_backup.at(choose) = deck_backup.at(deck_backup.size()-1);
		deck_backup.pop_back();
	}
}

// Original method by Fisher and Yates
// get the alredy shuffle bag
void Bag::re_shuffle(){
	std::deque<int> deck_backup = shuffled_deck;
	srand(time(NULL));
	int choose = 0;
	shuffled_deck.clear();
	while(!deck_backup.empty()){
		choose = rand() % deck_backup.size();
		shuffled_deck.push_back(deck_backup.at(choose));
		deck_backup.erase(deck_backup.begin()+choose);
	}
}
// Moderm method by Richard Durstenfeld
// get the alredy shuffle bag
void Bag::re_shuffle_p(){
	std::deque<int> deck_backup = shuffled_deck;
	srand(time(NULL));
	int choose = 0;
	shuffled_deck.clear();
	while(!deck_backup.empty()){
		choose = rand() % deck_backup.size();
		shuffled_deck.push_back(deck_backup.at(choose));
		deck_backup.at(choose) = deck_backup.at(deck_backup.size()-1);
		deck_backup.pop_back();
	}
}

Bag::~Bag() {
	// TODO Auto-generated destructor stub
}

