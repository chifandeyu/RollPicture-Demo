#ifndef ROLLPICTURE_H
#define ROLLPICTURE_H
#include <QWidget>
#include <QObject>
#include <QLabel>
#include <QState>
#include <QStateMachine>
#include <QParallelAnimationGroup>
#include <QPropertyAnimation>
#include <QSignalTransition>
#include <QDebug>
#include <QTimer>
class RollPicture : public QWidget
{
	Q_OBJECT
public:
	explicit RollPicture(QStringList picList, QSize picSize, int picCount,
		int speedTime, int delayTime = 500, int space = 0, QWidget *parent = 0);
	void resume();//恢复
	void pause();//暂停
signals:
	void AnimationStart();
	void nextState();
public slots:
	void start();
	void startTimer();
	void changeItemPic();
private:
	void initItem();
	void initStates();
	void initCoord();
	void initAnimationGroup();
private:
	QStringList m_picList; //图片文件路径列表
	QSize m_picSize;//图片分辨率大小
	int m_picCount; //图片个数
	int m_speedTime;//动画移动耗时
	int m_delayTime;//停留时长
	int m_space;
	QSize m_itemSize;
	int m_itemCount;
	int m_picWindowCount;
	QState *m_state; //??
	QLabel *m_item;
	QParallelAnimationGroup *m_group; //
	QPropertyAnimation *m_anim; //
	QStateMachine m_scrollMachine; //
	QSignalTransition *m_transStart; //
	QSignalTransition *m_trans; //
	QSignalTransition *m_transEnd; //
	QList <QState *> m_stateList; //
	QList <QLabel *> m_itemList;
	QList <QPoint> m_picPosList;
	QTimer timer;
};
#endif // ROLLPICTURE_H