/* WIN-TC BGI ͼ�α��ģ�� */

#include "Conio.h"
#include "graphics.h"
#define closegr closegraph

void initgr(void) /* BGI��ʼ�� */
{
  int gd = DETECT, gm = 0; /* ��gd = VGA,gm = VGAHI��ͬ��Ч�� */
  registerbgidriver(EGAVGA_driver);/* ע��BGI��������Բ���Ҫ.BGI�ļ���֧������ */
  initgraph(&gd, &gm, "");
}

void test();

int main(void)
{
  initgr(); /* BGI��ʼ�� */

  test();

  getch(); /* ��ͣһ�£�����ǰ���ͼ��������н�� */
  closegr(); /* �ָ�TEXT��Ļģʽ */
  return 0;
}

void test()
{
	int i;
}
