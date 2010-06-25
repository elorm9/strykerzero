################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Airplane.cpp \
../src/Bound.cpp \
../src/Craft.cpp \
../src/Enemy.cpp \
../src/EnemyCreator.cpp \
../src/Entity.cpp \
../src/FPS_Regulator.cpp \
../src/Game.cpp \
../src/Health.cpp \
../src/Image.cpp \
../src/ItemManager.cpp \
../src/Point2D.cpp \
../src/Projectile.cpp \
../src/Timer.cpp 

OBJS += \
./src/Airplane.o \
./src/Bound.o \
./src/Craft.o \
./src/Enemy.o \
./src/EnemyCreator.o \
./src/Entity.o \
./src/FPS_Regulator.o \
./src/Game.o \
./src/Health.o \
./src/Image.o \
./src/ItemManager.o \
./src/Point2D.o \
./src/Projectile.o \
./src/Timer.o 

CPP_DEPS += \
./src/Airplane.d \
./src/Bound.d \
./src/Craft.d \
./src/Enemy.d \
./src/EnemyCreator.d \
./src/Entity.d \
./src/FPS_Regulator.d \
./src/Game.d \
./src/Health.d \
./src/Image.d \
./src/ItemManager.d \
./src/Point2D.d \
./src/Projectile.d \
./src/Timer.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


