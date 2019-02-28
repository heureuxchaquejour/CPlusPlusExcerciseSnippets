// analects age lists
// 参考： https://ctext.org/analects/wei-zheng
// 先秦兩漢 -> 儒家 -> 論語 -> 為政
// 原文：	
// 子曰：「吾十有五而志于學，三十而立，四十而不惑，五十而知天命，六十而耳順，七十而從心所欲，不踰矩。」
// 英文翻譯：理雅各（James Legge）
// The Master said, "At fifteen, I had my mind bent on learning. 
// At thirty, I stood firm. 
// At forty, I had no doubts. 
// At fifty, I knew the decrees of Heaven.
// At sixty, my ear was an obedient organ for the reception of truth. 
// At seventy, I could follow what my heart desired, without transgressing what was right."

// This is an exercise of ternary operator ? : in C++
#include <iostream>

#define RXWG "乳臭未干"
#define ZYX "至于学"
#define EL "而立"
#define BH "不惑"
#define ZTM "知天命"
#define ES "耳顺"
#define CXSY "从心所欲"

int main()
{
	std::cout << "Enter the age." << std::endl;
	signed short age;
	while(std::cin >> age){
		const char* string = age>=15? 
								age>=30? 
									age>= 40? 
										age>= 50? 
											age>=60? 
												age>=70? 
												CXSY
											:ES 
										:ZTM 
									:BH 
								:EL 
							:ZYX
						:RXWG;
		std::cout << string << std::endl;
	}
	std::cin.get();
	return 0;
}
