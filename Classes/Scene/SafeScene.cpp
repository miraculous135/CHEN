<<<<<<< main
#include"SafeScene.h"
#include"cocos2d.h"
#include"json.h"
#include"Gate.h"
USING_NS_CC;
bool SafeScene::init()
{
	auto visibleSize = Director::getInstance()->getVisibleSize();
	auto origin = Director::getInstance()->getVisibleOrigin();
	

<<<<<<< main
	//����ͼƬ����
=======
	//����ͼƬ����
>>>>>>> main
	auto backgroundSprite = Sprite::create("background/SafeScene.png");
	backgroundSprite->setPosition(origin.x + backgroundSprite->getContentSize().width / 2, origin.y + backgroundSprite->getContentSize().height / 2);
	this->addChild(backgroundSprite,1);



<<<<<<< main
	//���bgm�Լ���tiledmap
=======
	//���bgm�Լ���tiledmap
>>>>>>> main
	getmusicManager()->changeMusic("bgm/Room.mp3");
	map = TMXTiledMap::create("maps/SafeScene.tmx");
	bindTiledMap(map);

<<<<<<< main
	//���ð�ť
=======
	//���ð�ť
>>>>>>> main
	auto settings = MenuItemImage::create("ui/settings.png", "ui/settings.png", [&](Ref* sender) {
		getmusicManager()->effectPlay("effect/button.mp3");
		getmusicManager()->menu(this);
	});
	//λ��λ�����Ͻ�
	settings->setPosition(visibleSize.width - settings->getContentSize().width / 2, visibleSize.height - settings->getContentSize().height/2);

	//�˵�
	auto menu = Menu::create(settings, nullptr);
	menu->setPosition(Vec2::ZERO);
	addChild(menu,5);

	//��Ҵ���
	player = Player::create();
	player->setPosition(64 * 4 + 32, 64 * 4 + 32);
<<<<<<< main
	player->getplayermove()->bindMap(map);//PlayerMove������ͼ��
	this->addChild(player,2);

	//�����Ŵ���
=======
	player->getplayermove()->bindMap(map);//PlayerMove������ͼ��
	this->addChild(player,2);

	//�����Ŵ���
>>>>>>> main
	safeGate = Gate::create();
	safeGate->setPosition(64*9.45,64*10);
	safeGate->bindPlayer(player);
	safeGate->bindStart(this);
	safeGate->bindDestination(this);
	this->addChild(safeGate, 5);

	////eventlistener,���̼��������ƶ�����
	auto myKeyListener = EventListenerKeyboard::create();
	myKeyListener->onKeyPressed = [=](EventKeyboard::KeyCode keycode, cocos2d::Event* event)//���̰���ʱ��Ӧ
	{
		//CCLOG("keycode%d", keycode);
<<<<<<< main
		player->getplayermove()->TrueKeyCode(keycode);//PlayerMove��keyMap�Ķ�Ӧ������true
=======
		player->getplayermove()->TrueKeyCode(keycode);//PlayerMove��keyMap�Ķ�Ӧ������true
>>>>>>> main

	};

	myKeyListener->onKeyReleased = [=](EventKeyboard::KeyCode keycode, cocos2d::Event* event)//�����ɿ�ʱ��Ӧ
	{

		//CCLOG("keyboard is released,code is %d", keycode);
		player->getplayermove()->FalseKeyCode(keycode);
	};

	_eventDispatcher->addEventListenerWithSceneGraphPriority(myKeyListener, this);
	this->scheduleUpdate();


	return 1;
}

void SafeScene::update(float dt)
{
<<<<<<< main
	//����Player��update��Player��update�ٵ���PlayMove��move�����ֹ���ޣ�
	//isWall(player->getPositionX(), player->getPositionY())
	//jsonʹ��ʾ��
=======
	//����Player��update��Player��update�ٵ���PlayMove��move�����ֹ���ޣ�
	//isWall(player->getPositionX(), player->getPositionY())
	//jsonʹ��ʾ��
>>>>>>> main
	player->update(dt);
	safeGate->update(dt);
}

<<<<<<< main
=======
=======

>>>>>>> main

>>>>>>> main
