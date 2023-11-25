import sensor,time,image,lcd
green=(98, 65, -113, -26, 65, -25)
#红绿灯识别
sensor.reset()                       #初始化
sensor.set_brightness(-3)
sensor.set_auto_exposure(False,250)
sensor.set_contrast(1)
sensor.set_auto_gain(False)      #关闭白平衡
sensor.set_auto_whitebal(False)  #关闭自动增益
sensor.set_pixformat(sensor.RGB565)
sensor.set_framesize(sensor.QQVGA)    #设置图像大小
lcd.init()
#sensor.set_windowing((145,90,30,60))
sensor.skip_frames(50)    #开机消抖
clock = time.clock()
green_num=0
flag=0
roi=[145,90,30,60]
while(True):
    clock.tick()
    img=sensor.snapshot() #拍照并返回图像

    #img.draw_rectangle([0,0,30,60]) #矩形区域框
    find=img.find_blobs([green],100,roi)
    lcd.display(img)
    if find:    #如果找到了目标颜色
        flag=1
        green_num+=1
    else:
        flag=0

    print(green_num)  #调试
