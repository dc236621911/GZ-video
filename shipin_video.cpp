#include "shipin_video.h"
#include "ui_shipin_video.h"


ShiPin_video::ShiPin_video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShiPin_video)
{
    ui->setupUi(this);


    QtAV::Widgets::registerRenderers();

    GLWidgetRenderer2 renderer;
    renderer.show();
    AVPlayer player;
    player.setRenderer(&renderer);
    player.play("G:\\biaozhun\\0903D10120170607083331.mpg");

}

ShiPin_video::~ShiPin_video()
{
    delete ui;
}

