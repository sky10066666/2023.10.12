#define _CRT_SECURE_NO_WARNINGS 1

//
//#include <stdio.h>
//
//int main()
//
//{
//	int a = 0;
//	; // 是语句 --空语句
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int age = 17;
	/*if (age < 18)
		printf("未成年\n");
	else if (age < 28 && age >= 18)
		printf("青年\n", age);
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 90)
		printf("老年\n");
	else     最后的else 可以省略
		printf("老不死\n");

*/
	//if (age < 18)
	//{

	//	printf("未成年\n");//  如果条件语句是多条 就要用{}括起来，形成代码块
	//	printf("不能谈恋爱\n");
	//}
	//else
	//{
	//if (age < 28 && age >= 18)
	//	printf("青年\n", age);
	//else if (age >= 28 && age < 50)
	//	printf("壮年\n");
	//else if (age >= 50 && age < 90)
	//	printf("老年\n");
	//else    //最后的else 可以省略
	//	printf("老不死\n");
	//}




	//return 0;



//#include <stdio.h>

	//int main()
	//{
	//	int num = 4;
	//	if (num == 5)//  =---赋值  == ----判断
	//	{

	//		printf("呵呵\n");
	//	}
	//
	//
	//	return 0;
	//}


//int main()
//{
//	int num = 4;
//	if (5 == num) //判断常量和字符 通常把常量放在等式的左边  
//	{
//
//		printf("呵呵\n");
//	}
//
//
//	return 0;
//}
//

		


//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//
//		printf("%d ", a);
//		a += 2;
//	}
//	return 0;
//}
//
//



//int main()
//
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1) //   或者写 a%2 != 0
//			printf("%d ", a);
//		a++;
//	
//	}
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//
//	switch (day)   //switch语句只能用于整型表达式
//	{
//	case 1:	
//	case 2:	
//	case 3:
//	case 4:	
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:	
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//
//	}
//
//	return 0;
//}




	//if (1 == day)
	//	printf("星期一\n");
	//else if (2 == day)
	//	printf("星期二\n");
	//else if (3 == day)
	//	printf("星期三\n");
	//else if (4 == day)
	//	printf("星期四\n");
	//else if (5 == day)
	//	printf("星期五\n");
	//else if (6 == day)
	//	printf("星期六\n");
	//else if (7 == day)
	//	printf("星期天\n");


//
//#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)  //switch 里面的switch语句 允许嵌套
//		{
//		case 1:n++;
//		case 2:m++; 
//			n++; 
//			break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//
//		
//	}
//	printf("m = %d\nn = %d\n", m, n);
//
//	return 0;
//}
//
//


// 循环语句   
//while 
//for 
//do while



#include <stdio.h>


int main()
{
	int i = 1;
	while (i <= 10)
	{

		printf("%d ", i);
		i++;
	}

	
	
	
	return 0;


}











