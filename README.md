# HBridge
Arduino library which provides facilities to use an H bridge

--HOW TO USE--

initialize
  initialize the H bridge using init(enable pin, input 1, input 2);
  
usage
  update the value of the H bridge using update(value)
  
  value: 
  goes from -255, 255. 
  positive value will make spin the motor in the opposite direction of negative
  the greater the absolute value is the faster the motor will spin
  
tips
  invert input 1 and input 2 on init(input 1, input 2) if the direction that you want is wrong
  use map() to map your value's range into update()'s range     es-> update(map(myInput, myMin, myMax, -255, 255))
