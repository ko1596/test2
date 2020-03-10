<<<<<<< HEAD
﻿#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number) {
       if(number > target){
        std::cout << "Smaller" <<std::endl;
        return;
    }
    else if(number < tar    ge){
        std::cout <<"Bigger" << std::ednl;
        return false;
    }
    return true;
}
int main(array<System::String ^> ^args)
{          
    int guess;
           do{
        std::cout << "Choose a number between 1 - 100 :"
        std:cin>>guess;
    }while(!Guess(guess));
    return 0;
}
=======
﻿#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number) {
	static int target = -1;
	if (target == -1) {
		Random r;
		target = r.Next() % 100 + 1;
	}
	static int target = -1;
	if (target == -1) {
		Random r;
		target = r.Next() % 100 + 1;
	}
	if (number == target)return true;
	return false;
}
int main(array<System::String ^> ^args)
{   
    int guess;
    do{
std:cin>>guess;
    }while(!Guess(guess));
    return 0;
}
>>>>>>> 17ecc96c4a264a94d1b91b2321d016dbb8b96fcd
