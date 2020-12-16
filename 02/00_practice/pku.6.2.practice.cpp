/*
圣诞老人的礼物 p106
贪心算法示例
https://www.bilibili.com/video/av45109397?p=45

题目：
圣诞老人分发糖果。
1. 现有多箱不同的糖果，每箱糖果有自己的价值和重量。
2. 每箱糖果可以拆分成任意散装组合带有。
3. 圣诞老人的驯鹿雪橇最多只能装下重量W的糖果。
问：圣诞老人最多能带走多大价值的糖果。

解法：（贪心）
按礼物的价值/重量比从大到小一次选取礼物，对选取的礼物尽可能多地装，知道达到总重量w。

注意点：
如果没有第2个要求，即“2. 每箱糖果可以拆分成任意散装组合带有。”，贪心算法有可能是不正确的。
e.g. 最大称重量10， 三箱糖果。(8,6) (5,5) (5,5) 若按贪心法会选（8,6）,但实际上我们可以选那两箱（5,5）
贪心算法只着眼于眼前，不考虑当前策略会对后续什么影响。

输入示例：
4 15
100 4
412 8
266 7
591 2

输出示例：
1193.0
*/