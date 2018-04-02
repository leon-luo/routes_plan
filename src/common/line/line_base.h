/******************************************************************************

  版权所有 (C), 2017-2028, _ _ _ Co., Ltd.

 ******************************************************************************
  文件名称: line_base.h
  版本编号: 初稿
  作     者: Leon
  生成日期: 2017年12月25日
  最近修改:
  功能描述: line_base.cpp 的头文件
  函数列表:
  修改历史:
  1.日     期: 2017年12月25日
    作     者: Leon
    修改内容: 创建文件
******************************************************************************/
#ifndef __LINE_BASE_H__
#define __LINE_BASE_H__

/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
//extern "C"{
#endif
#endif /* __cplusplus */
/*****************************************************************************/

/******************************************************************************
 * 包含头文件
 ******************************************************************************/

/******************************************************************************
 * 外部变量声明
 ******************************************************************************/

/******************************************************************************
 * 外部函数声明
 ******************************************************************************/

/******************************************************************************
 * 全局变量
 ******************************************************************************/

/******************************************************************************
 * 宏定义
 ******************************************************************************/

/******************************************************************************
 * 常量声明
 ******************************************************************************/

/******************************************************************************
 * 枚举类型
 ******************************************************************************/

/******************************************************************************
 * 结构体类型
 ******************************************************************************/

/******************************************************************************
 * 类声明
 ******************************************************************************/
class line_base
{
public:
	line_base();
	~line_base();
	
	double get_distance(double x1, double y1, double x2, double y2);
	double get_vertical_distance(double x, double y, double x1, double y1, double x2, double y2);
protected:

private:
	line_base(const line_base&){};
	line_base& operator=(const line_base&){};
};

/******************************************************************************
 * 内部函数声明
 ******************************************************************************/


/*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
//}
#endif
#endif /* __cplusplus */
/*****************************************************************************/

#endif /* __LINE_BASE_H__ */
