#ifndef SYSTEM_CONFIG_H
#define SYSTEM_CONFIG_H

#define _CRT_SECURE_NO_WARNINGS	

#include <stdio.h>
#include <assert.h>
#include <includes.h>		

/****** TASK PRIORITIES ******/
#define App1Task_Prio 14  //App1Task的优先级
#define App2Task_Prio 16  ////App2Task的优先级

#define OS_TASK_TMR_PRIO 5 


/****** TASK STACK SIZES ******/
#define App1Task_StkSize 320
#define App2Task_StkSize 320

extern void App1Task(void *p_arg);
extern void App2Task(void *p_arg);

#endif