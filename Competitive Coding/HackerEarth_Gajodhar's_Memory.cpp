/*~~~~~~~~~~~~~~~~~~*
 *                  *
 * $Dollar Akshay$  *
 *                  *
 *~~~~~~~~~~~~~~~~~~*/

//https://www.hackerearth.com/coc1/algorithm/gajodhars-memory/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <assert.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define REP(i,n) FOR(i,0,(int)n-1)
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,1,sizeof(x))
#define SORT(a,n) sort(begin(a),begin(a)+n)
#define REV(a,n) reverse(begin(a),begin(a)+n)
#define ll long long
#define MOD 1000000007
#define gc getchar_unlocked
struct Edge{ int v, w; };


int main(){

	int t, n;
	char city[1000];
	scanf("%d", &t);
	REP(tc, t){
		int a[26];
		REP(i, 26) a[i] = 0;
		scanf("%d", &n);
		REP(i, n){
			scanf("%s", city);
			a[city[0] - 'A']++;
		}
		int c = 0;
		REP(i, 26) c = a[i] == 1 ? c + 1 : c;
		printf("%d\n", c);
	}
	return 0;
}

//Solved