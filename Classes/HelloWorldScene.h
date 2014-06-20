#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld : public cocos2d::Layer
{
protected:

	cocos2d::Point	origin;										//使用端末の(0,0)地点
	cocos2d::Size	visibleSize;								//使用端末の画面サイズ

	void onTouchesBegan(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event *pEvent);
//	virtual void onTouchesMoved(const std::vector<cocos2d::Touch*>& touches,cocos2d::Event *pEvent);
//	virtual void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event *pEvent);
//	virtual void onTouchesCancelled(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event *pEvent);

public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
