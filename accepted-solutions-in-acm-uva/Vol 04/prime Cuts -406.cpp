#include<stdio.h>
const short prime[171]={0,1,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,
131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,
277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,
443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,
617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,
809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,
991,997,1009};
//total 169
const short sn[]={0,1,2,3,3,4,4,5,5,5,5,6,6,7,7,7,7,8,8,9,9,9,9,10,10,10,10,10,10,11,11,12,12,12,12,12,12,13,13,13,13,14,14,15,15,15,15,16,16,16,
16,16,16,17,17,17,17,17,17,18,18,19,19,19,19,19,19,20,20,20,20,21,21,22,22,22,22,22,22,23,23,23,23,24,24,24,24,24,24,25,25,
25,25,25,25,25,25,26,26,26,26,27,27,28,28,28,28,29,29,30,30,30,30,31,31,31,31,31,31,31,31,31,31,31,31,31,31,32,32,32,32,33,
33,33,33,33,33,34,34,35,35,35,35,35,35,35,35,35,35,36,36,37,37,37,37,37,37,38,38,38,38,38,38,39,39,39,39,40,40,40,40,40,40,
41,41,41,41,41,41,42,42,43,43,43,43,43,43,43,43,43,43,44,44,45,45,45,45,46,46,47,47,47,47,47,47,47,47,47,47,47,47,48,48,48,
48,48,48,48,48,48,48,48,48,49,49,49,49,50,50,51,51,51,51,52,52,52,52,52,52,53,53,54,54,54,54,54,54,54,54,54,54,55,55,55,55,
55,55,56,56,56,56,56,56,57,57,57,57,57,57,58,58,59,59,59,59,59,59,60,60,60,60,61,61,62,62,62,62,62,62,62,62,62,62,63,63,63,
63,63,63,63,63,63,63,63,63,63,63,64,64,64,64,65,65,66,66,66,66,67,67,67,67,67,67,67,67,67,67,67,67,67,67,68,68,68,68,68,68,
69,69,69,69,69,69,69,69,69,69,70,70,71,71,71,71,72,72,72,72,72,72,73,73,73,73,73,73,73,73,74,74,74,74,74,74,75,75,75,75,75,
75,76,76,76,76,77,77,77,77,77,77,78,78,78,78,78,78,78,78,79,79,79,79,80,80,80,80,80,80,80,80,81,81,81,81,81,81,81,81,81,81,
82,82,83,83,83,83,83,83,83,83,83,83,84,84,85,85,85,85,85,85,86,86,86,86,87,87,87,87,87,87,88,88,88,88,88,88,88,88,89,89,89,
89,90,90,91,91,91,91,92,92,92,92,92,92,92,92,92,92,92,92,93,93,93,93,93,93,93,93,94,94,94,94,95,95,95,95,95,95,95,95,96,96,
96,96,97,97,97,97,97,97,98,98,98,98,98,98,98,98,98,98,98,98,99,99,100,100,100,100,100,100,100,100,100,100,100,100,100,100,
100,100,100,100,101,101,101,101,101,101,102,102,102,102,102,102,102,102,102,102,103,103,103,103,103,103,104,104,104,104,104,
104,105,105,106,106,106,106,106,106,107,107,107,107,107,107,107,107,107,107,108,108,108,108,108,108,109,109,109,109,109,109,
110,110,111,111,111,111,111,111,112,112,112,112,112,112,113,113,113,113,114,114,115,115,115,115,115,115,115,115,115,115,115,
115,116,116,116,116,116,116,116,116,116,116,117,117,118,118,118,118,119,119,119,119,119,119,120,120,120,120,120,120,121,121,
122,122,122,122,122,122,122,122,122,122,122,122,123,123,123,123,124,124,124,124,124,124,125,125,125,125,125,125,125,125,126,
126,126,126,126,126,126,126,126,126,127,127,127,127,127,127,127,127,128,128,128,128,128,128,128,128,128,128,129,129,129,129,
129,129,129,129,130,130,130,130,130,130,131,131,131,131,131,131,132,132,132,132,133,133,133,133,133,133,133,133,134,134,134,
134,134,134,135,135,135,135,136,136,136,136,136,136,136,136,137,137,137,137,138,138,138,138,138,138,138,138,138,138,138,138,
138,138,139,139,139,139,139,139,139,139,139,139,140,140,140,140,140,140,140,140,140,140,140,140,141,141,142,142,142,142,142,
142,142,142,142,142,143,143,144,144,144,144,145,145,146,146,146,146,146,146,146,146,146,146,147,147,147,147,147,147,147,147,
147,147,147,147,147,147,148,148,148,148,149,149,150,150,150,150,151,151,151,151,151,151,151,151,151,151,151,151,151,151,152,
152,152,152,153,153,154,154,154,154,155,155,155,155,155,155,155,155,155,155,155,155,155,155,155,155,155,155,155,155,156,156,
156,156,157,157,157,157,157,157,157,157,158,158,158,158,158,158,158,158,158,158,159,159,159,159,159,159,159,159,160,160,160,
160,161,161,161,161,161,161,162,162,162,162,162,162,163,163,163,163,163,163,163,163,163,163,163,163,163,163,164,164,164,164,
165,165,165,165,165,165,166,166,166,166,166,166,167,167,167,167,167,167,167,167,168,168,168,168,168,168,169,169,169,169,169,
169,169,169,169,169,169,169,170};

void main()
{
//freopen("in08.txt","r",stdin);
int n,c, i,j; bool fl=0;
while(scanf("%d%d",&n,&c)!=EOF)
{
	//if(fl) putchar(10);  fl=1;
	printf("%d %d:",n,c);
	//(a+b-1)/b		[ rounding up ]
	//(2*a+b)/(2*b) [ nearest ]
	n=sn[n];
	if(n%2) { j=(n/2)+1; c--; i=j-c; }
	else { j=n/2; i=j-c+1;}

	if(i<1) { i=1; c=n; }
	else c+=j;

	while(i<=j) printf(" %d",prime[i++]);
	while(i<=c) printf(" %d",prime[i++]);
	puts("\n");
}		
}		