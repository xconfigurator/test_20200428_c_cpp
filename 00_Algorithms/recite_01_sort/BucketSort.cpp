/**
 * @file BucketSort.cpp
 * @author liuyang
 * @brief 桶排序
 * 
 * 视频：
 * 浙江大学 陈越 桶排序(视频 3分钟，看着视频撸代码即可)
 * http://www.icourse163.org/learn/ZJU-93001?tid=120001#/learn/content?type=detail&id=491002&cid=516004&replay=true
 * 马士兵 计数排序 上
 * https://www.bilibili.com/video/BV1Wb41157ed?spm_id_from=333.999.0.0
 * 马士兵 计数排序 下
 * https://www.bilibili.com/video/BV1Nb411G7zN?spm_id_from=333.999.0.0
 * 马士兵 基数排序
 * https://www.bilibili.com/video/BV184411L79P?spm_id_from=333.999.0.0
 * 
 * @version 0.1
 * @date 2021-12-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/*
// 伪代码
// 适用范围：N >> M。 即数组数据量(N)巨大，但数组元素可取范围（M）很有限。
// 当N << M的时候，需要使用基数排序。
void Bucket_Sort(ElementType A[], int N) {
    count[] 初始化;             // class StatisNode { public List<Student> students; }
    while (读入一个学生的成绩grade) {
        将该生插入count[grade]链表；
    }
    for (i = 0; i < M; i++) {   // M是count的大小
        if (count[i]) {
            输出整个count[i]链表;
        }
    }
}
*/
