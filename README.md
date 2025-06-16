# 人脸识别系统 - Face Register

![Qt](https://img.shields.io/badge/Qt-5.15-green)
![OpenCV](https://img.shields.io/badge/OpenCV-4.5-blue)
![License](https://img.shields.io/badge/License-MIT-orange)

## 📌 项目概述

基于Qt和OpenCV开发的跨平台人脸识别系统，支持人脸注册、识别和管理功能。

## ✨ 核心功能

- 实时人脸检测与识别
- 人脸数据注册与管理
- 多用户支持
- 识别记录存储
- 可配置识别阈值
### 主界面
![主界面](screenshots/main_ui.png)

### 人脸注册流程
| 步骤 | 截图 |
|------|------|
| 1. 点击注册按钮 | ![注册步骤1](screenshots/register_step1.png) |
| 2. 输入用户信息 | ![注册步骤2](screenshots/register_step2.png) |
| 3. 人脸采集 | ![注册步骤3](screenshots/register_step3.png) |

### 实时识别演示
![识别演示](screenshots/recognition_demo.gif)

### 用户管理界面
![用户管理](screenshots/user_management.png)

## 🛠️ 技术栈

| 技术        | 用途                |
|-------------|-------------------|
| Qt 5.15+    | GUI界面开发         |
| OpenCV 4.5+ | 图像处理与人脸识别   |
| SeetaFace | 人脸识别引擎   |
| SQLite3     | 本地数据存储        |
| qmake       | 项目构建            |

## 🚀 快速开始

### 环境准备
```bash
# 安装依赖 (windows)
sudo apt install qt5-default libopencv-dev
