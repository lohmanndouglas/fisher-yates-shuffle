//============================================================================
//   Copyright 2018 Douglas Lohmann
//   All Rights Reserved Worldwide
//
//   Licensed under the Apache License, Version 2.0 (the
//   "License"); you may not use this file except in
//   compliance with the License.  You may obtain a copy of
//   the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in
//   writing, software distributed under the License is
//   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
//   CONDITIONS OF ANY KIND, either express or implied.  See
//   the License for the specific language governing
//   permissions and limitations under the License.
//
// Name        : fisherYates.cpp
// Author      : Douglas Lohmann
// Description : Fisher-Yates shuffle in C++
// 		Create bags to shuffler based on Fisher-Yates algorithm
// Fun with algorithms :)
// ** use -std=c++11
//============================================================================

#include <iostream>
#include "Bag.h"

using namespace std;

int main(){
	Bag* numbers = new Bag({1,2,3,4,5,6,7,8,9});
	numbers->print_bag();

	numbers->shuffle();
	numbers->print_bag();

	numbers->shuffle_p();
	numbers->print_bag();

	numbers->re_shuffle();
	numbers->print_bag();

	numbers->re_shuffle_p();
	numbers->print_bag();

	return 0;
}
