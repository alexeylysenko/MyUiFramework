#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <MyUiFramework/MyUiFramework.h>
#include <MyUiFramework/style/classic/MyClassicStyle.h>
#include <MyUiFramework/style/modern/MyModernStyle.h>

int main(int argc, char *argv[]) {
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  Q_INIT_RESOURCE(controls);
  QGuiApplication app(argc, argv);

  MyUiFramework::enableStyle<MyClassicStyle>();
  QQmlApplicationEngine engine;
  engine.addImportPath(":/");
  engine.load(QUrl(QLatin1String("qrc:/qml/main.qml")));

  return app.exec();
}
