# calendar

设计程序，年、月由用户输入，输出一个如下形式的闰年日历（星期固定输出）

		2020	年	1	月

	日	一	二	三	四	五	六

	 			 1	 2	 3	 4

	 5	 6	 7	 8	 9	10	11

	12	13	14	15	16	17	18

	19	20	21	22	23	24	25

	26	27	28	29	30	31

提示：可按公式 iWeek = ((c/4)-2*c+y+(y/4)+(26*(iMonth+1)/10)+iDay-1) % 7 将年iYear/月iMonth/日iDay换算成星期iWeek。公式中：c=iYear/100，c>15；y=iYear%100；当iMonth为1时，iYear改为iYear-1，iMonth改为13；当iMonth2时，iYear改为iYear-1，iMonth改为14.


