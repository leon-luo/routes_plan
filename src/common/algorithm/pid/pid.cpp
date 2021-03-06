/******************************************************************************

  版权所有 (C), 2017-2028, _ _ _ Co., Ltd.

 ******************************************************************************
  文件名称: pid.cpp
  版本编号: 初稿
  作     者: Leon
  生成日期: 2017年11月18日
  最近修改:
  功能描述   : PID控制算法
  函数列表:
  修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 创建文件
******************************************************************************/

/******************************************************************************
 * 包含头文件
 ******************************************************************************/
#include "pid.h"

#include "debug_function.h"

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

/******************************************************************************
 * 内部函数声明
 ******************************************************************************/
/*****************************************************************************
 函 数 名: pid.pid
 功能描述  : 构造函数
 输入参数  : 无
 输出参数: 无
 返 回 值: pid
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
pid::pid()
{

}

/*****************************************************************************
 函 数 名: pid.~pid
 功能描述  : 析构函数
 输入参数  : 无
 输出参数: 无
 返 回 值: pid
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
pid::~pid()
{

}

/*****************************************************************************
 函 数 名: pid.set_pid_goal_value
 功能描述  : 设定目标值
 输入参数: double value  
 输出参数: 无
 返 回 值: void
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
void pid::set_pid_goal_value(double value)
{
	pid_.goal_value = value;
}

/*****************************************************************************
 函 数 名: pid.get_pid_goal_value
 功能描述  : 获取目标值
 输入参数: void  
 输出参数: 无
 返 回 值: double
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
double pid::get_pid_goal_value(void)
{
	return pid_.goal_value;
}

/*****************************************************************************
 函 数 名: pid.set_pid_proportion
 功能描述  : 设定比例系数
 输入参数: double value  
 输出参数: 无
 返 回 值: void
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
void pid::set_pid_proportion(double value)
{
	pid_.proportion = value;
}

/*****************************************************************************
 函 数 名: pid.get_pid_proportion
 功能描述  : 获取比例系数
 输入参数: void  
 输出参数: 无
 返 回 值: double
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
double pid::get_pid_proportion(void)
{
	return pid_.proportion;
}

/*****************************************************************************
 函 数 名: pid.set_pid_integral
 功能描述  : 设定积分系数
 输入参数: double value  
 输出参数: 无
 返 回 值: void
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
void pid::set_pid_integral(double value)
{
	pid_.integral = value;
}

/*****************************************************************************
 函 数 名: pid.get_pid_integral
 功能描述  : 获取积分系数
 输入参数: void  
 输出参数: 无
 返 回 值: double
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
double pid::get_pid_integral(void)
{
	return pid_.integral;
}

/*****************************************************************************
 函 数 名: pid.set_pid_derivative
 功能描述  : 设定微分系数
 输入参数: double value  
 输出参数: 无
 返 回 值: void
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
void pid::set_pid_derivative(double value)
{
	pid_.derivative = value;
}

/*****************************************************************************
 函 数 名: pid.get_pid_derivative
 功能描述  : 获取微分系数
 输入参数: void  
 输出参数: 无
 返 回 值: double
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
double pid::get_pid_derivative(void)
{
	return pid_.derivative;
}

/*****************************************************************************
 函 数 名: pid.set_pid
 功能描述  : 设定PID数据
 输入参数: PID_STRU pid  
 输出参数: 无
 返 回 值: void
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
void pid::set_pid(PID_STRU pid)
{
	pid_ = pid;
}

/*****************************************************************************
 函 数 名: pid.get_pid
 功能描述  : 获取PID数据
 输入参数: PID_STRU &pid  
 输出参数: 无
 返 回 值: void
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
void pid::get_pid(PID_STRU &pid)
{
	pid  = pid_;
}

/*****************************************************************************
 函 数 名: pid.init_pid
 功能描述  : 初始化PID
 输入参数: PID_STRU pid  
 输出参数: 无
 返 回 值: void
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
void pid::init_pid(PID_STRU pid)
{
	set_pid(pid);
}

/*****************************************************************************
 函 数 名: pid.pid_calc
 功能描述  : PID计算
 输入参数: PID_STRU &p_pid  
           double value     
 输出参数: 无
 返 回 值: double
 
 修改历史:
  1.日     期: 2017年11月18日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
double pid::pid_calc(PID_STRU &p_pid, double value)
{
	double ret = 0.0;
	double error = 0.0;
	double derror = 0.0;
	
	error = pid_.goal_value - value;                 //偏差
	pid_.sum_error += error;                         //积分
	derror = pid_.last_error - pid_.prev_error;      //当前微分
	pid_.prev_error = pid_.last_error;
	pid_.last_error = error;

	ret = pid_.proportion * error + pid_.integral * pid_.sum_error + pid_.derivative * derror;
	debug_print_info("value(%lf)    ret(%lf) = proportion(%lf) * error(%lf) + integral(%lf) * sum_error(%lf) + derivative(%lf) * derror(%lf);", value, ret, pid_.proportion, error, pid_.integral, pid_.sum_error, pid_.derivative, derror);

	return ret;
}

/*****************************************************************************
 函 数 名: pid.print_pid_data
 功能描述  : 打印PID数据
 输入参数: void  
 输出参数: 无
 返 回 值: void
 
 修改历史:
  1.日     期: 2017年11月20日
    作     者: Leon
    修改内容: 新生成函数
*****************************************************************************/
void pid::print_pid_data(void)
{
	PID_STRU *p_pid = &pid_;
	printf("goal_value = %lf\n", p_pid->goal_value);               // 设定目标 desired value
	printf("proportion = %lf\n", p_pid->proportion);               // 比例常数 proportional const
	printf("integral   = %lf\n", p_pid->integral);                 // 积分常数 integral const
	printf("derivative = %lf\n", p_pid->derivative);               // 微分常数 derivative const
	printf("last_error = %lf\n", p_pid->last_error);               // error[-1]
	printf("prev_error = %lf\n", p_pid->prev_error);               // error[-2]
	printf("sum_error  = %lf\n", p_pid->sum_error);                // sums of errors
}


