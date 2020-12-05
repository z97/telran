#include <stdio.h>

float simplePower(float x, float y);
float changeShelf(float a);
float changeSign(float a);
/*
 * Tools:
 * 1)simplePower - Regular power function for positive numbers.
 * 2)changeShelf - Fraction converter. Swaps the numerator and denominator.
 * 3)changeSign - Swap numbers between positive to negative and reverse.
 * -------------------------------
 * Conversion scheme:
 * 1)Bring the numbers to positive.
 * 2)Use simplePower.
 * 3)Use on demand changeSelf or/and changeSign.
 */
float XpowerY(int x, int y){
	if(x > 0 && y >= 0){
		simplePower(x, y);
	}

	else if(x < 0 && y >= 0){
		if(y % 2 == 0){
			float res = simplePower(x, y);
			return res;
		}
		else{
			float x2 = changeSign(x);
			float res = simplePower(x2, y);
			res = changeSign(res);
			return res;
		}
	}

	else if(x > 0 && y < 0){
		float y2 = changeSign(y);
		float res = simplePower(x, y2);
		res = changeShelf(res);
		return res;

	}

	else if(x < 0 && y < 0){
		if(y % 2 == 0){
			float x2 = changeSign(x);
			float y2 = changeSign(y);
			float res = simplePower(x2, y2);
			res = changeShelf(res);
			return res;
		}
		else{
			float x2 = changeSign(x);
			float y2 = changeSign(y);
			float res = simplePower(x2, y2);
			res = changeShelf(res);
			res = changeSign(res);
			return res;
			}
	}

	else if(x == 0){
		return 0;
	}
}

float simplePower(float x, float y){
	float a = 1;
	while(y > 0){
		a *= x;
		y--;
		}
	return a;
}

float changeShelf(float a){
	float b = 1/a;
	return b;
}

float changeSign(float a){
	a *= -1;
	return a;
}

