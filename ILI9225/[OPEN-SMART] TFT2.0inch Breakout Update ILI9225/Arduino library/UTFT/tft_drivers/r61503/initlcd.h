case R61503_8:
        LCD_Write_COM(0);
		LCD_Write_DATA(0x00);
		LCD_Write_COM(0);
		LCD_Write_DATA(0x00);
		delay(2);
		LCD_Write_COM(0);
		LCD_Write_DATA(0x00);
		LCD_Write_COM(0);
		LCD_Write_DATA(0x00);
		LCD_Write_COM(0);
		LCD_Write_DATA(0x00);
		LCD_Write_COM(0);
		LCD_Write_DATA(0xff);
		LCD_Write_COM(0);
		LCD_Write_DATA(0x00);
		LCD_Write_COM(0);
		LCD_Write_DATA(0x00);
		LCD_Write_COM(0);
		LCD_Write_DATA(0x00);
		LCD_Write_COM(0);
		LCD_Write_DATA(0x00);
	//	LCD_Write_COM_DATA(0x0000,0x0001);	 
		 delay(10);	 
		 LCD_Write_COM_DATA(0x00A4,0x0001);   
		 delay(10);	 
		 LCD_Write_COM_DATA(0x0070,0x9B00);   
		 delay(10);	 
		 LCD_Write_COM_DATA(0x0007,0x0031);   
		 delay(10);	 
		 //power supply setting   
		 LCD_Write_COM_DATA(0x0018,0x0001);   
		 delay(5);	
		 LCD_Write_COM_DATA(0x0010,0x16B0); 	  
		 delay(5);	
		 LCD_Write_COM_DATA(0x0011,0x0200);   
		 delay(5);	
		 LCD_Write_COM_DATA(0x0012,0x1118);   
		 delay(5);	
		 LCD_Write_COM_DATA(0x0013,0x880F);   
		 delay(5);	
		 LCD_Write_COM_DATA(0x0014,0x0000);   
		 delay(5);	
		 LCD_Write_COM_DATA(0x0012,0x1138);   
		 delay(5);	
		 LCD_Write_COM_DATA(0x0090,0x0004);   
		 LCD_Write_COM_DATA(0x0091,0x0000);   
		 LCD_Write_COM_DATA(0x0092,0x0007);   
		 LCD_Write_COM_DATA(0x0098,0x0002);   
		 //display contral	 
		 LCD_Write_COM_DATA(0x0001,0x0100);   
		 LCD_Write_COM_DATA(0x0002,0x0400);   
		 LCD_Write_COM_DATA(0x0003,0x1030);   
		 LCD_Write_COM_DATA(0x0008,0x0708);   
		 LCD_Write_COM_DATA(0x0070,0x1B00);   
		 LCD_Write_COM_DATA(0x0071,0x0001);   
		 //gamma contral   
		 LCD_Write_COM_DATA(0x0030,0x0305);   
		 LCD_Write_COM_DATA(0x0031,0x0005);   
		 LCD_Write_COM_DATA(0x0032,0x0000);   
		 LCD_Write_COM_DATA(0x0033,0x0003);   
		 LCD_Write_COM_DATA(0x0034,0x0900);   
		 LCD_Write_COM_DATA(0x0035,0x0607);   
		 LCD_Write_COM_DATA(0x0036,0x0307);   
		 LCD_Write_COM_DATA(0x0037,0x0305);   
		 LCD_Write_COM_DATA(0x0038,0x1305);   
		 LCD_Write_COM_DATA(0x0039,0x1C00);   
		 LCD_Write_COM_DATA(0x003A,0x1500);   
		 //panel interface	 
		 LCD_Write_COM_DATA(0x0020,0x0000);   
		 LCD_Write_COM_DATA(0x0021,0x0000);   
		 //address set	 
		 LCD_Write_COM_DATA(0x0050,0x0000); 			   
		 LCD_Write_COM_DATA(0x0051,0x00AF);   
		 LCD_Write_COM_DATA(0x0052,0x0000);   
		 LCD_Write_COM_DATA(0x0053,0x00DB);   
		 //display on	
		 delay(5);	
		 
		 LCD_Write_COM_DATA(0x0007,0x0001);   
		 delay(10);	 
		 LCD_Write_COM_DATA(0x0007,0x0021);   
		 delay(10);	 
		 LCD_Write_COM_DATA(0x0007,0x0233);   
 
	    LCD_Write_COM(0x22);

	
		break;
