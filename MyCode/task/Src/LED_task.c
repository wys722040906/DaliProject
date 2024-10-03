#include "LED_task.h"

/*
-----流水灯变量定义区-------------
*/
xTaskHandle LED_Handler;

void LED_Task(void *pvParameters){
		// int a = 0;
	TickType_t xLastWakeTime;	
    // 初始化上次唤醒时间为当前时间
    xLastWakeTime = xTaskGetTickCount();
	
	introMessage();
	for(;;){
		
    if (HAL_GPIO_ReadPin(START_GPIO_Port, START_Pin) == GPIO_PIN_RESET || HAL_GPIO_ReadPin(JUMP_GPIO_Port, JUMP_Pin) == GPIO_PIN_RESET) {
      showLine();
      play();
      HAL_Delay(300);
    }
//	printf("LED task");
		static char c = '4';
////		c++;
////		if(c > '0')c = '0';
////		printf("LED task\r\n");
////	vPortEnterCritical();
//	  OLED_NewFrame();
//	  OLED_PrintASCIIString(64,32,&c , &afont8x6, OLED_COLOR_REVERSED);		
//	  OLED_ShowFrame();
////	vPortExitCritical();
	
		// a += 1;
	//   if(a >= 100)a=0;
//		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
		vTaskDelayUntil(&xLastWakeTime ,10);
//		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET); 		
//        vTaskDelayUntil(&xLastWakeTime ,500);
	}
}




