#include "V0.h"

struct frame {
	int throws[3] = { 0 };

	frame() {}

	frame(int first, int second, int third = 0) {
		throws[0] = first;
		throws[1] = second;
		throws[2] = third;
	}
};

struct match {
	frame myMatch[10];
	int length = 10;

	match() {}

	match(int values[30]) {
		for (int i = 0; i < length; i++) {
			myMatch[i] = frame(values[i * 3], values[i * 3 + 1], values[i * 3 + 2]);
		}
	}
};

void V0::Execute()
{
	int matchValues[30] = { 0 };
	match myMatch = match(matchValues);
}

void V0::Test()
{
}
