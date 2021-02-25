# 2020cce

# 第01週的實習課程式

## 第一題 進階題：分式化簡
```C
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	
	int ans=1;
	for(int i=1; i<=b; i++){
		if(a%i==0&&b%i==0) ans=i;
	}
	printf("%d %d\n", a/ans, b/ans);
}
```

![第1題](SOIT106_ADVANCE_002.png)

## 第二題 進階題：讀入整數反序列印
```C
#include <stdio.h>
int a[10000];
int main()
{
	int N=0;
	for(int i=0; i<10000; i++){
		scanf("%d", &a[i] );
		if(a[i]==0) break;
		
		N++;
	}
	
	for(int i=N-1; i>=0; i--){
		printf("%d ", a[i]);
	}
	printf("\n");
}
```

![第2題](SOIT106_ADVANCE_003.png)
