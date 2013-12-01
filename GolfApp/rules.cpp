#include "rules.h"
#include "ui_rules.h"

/*!
 * \brief rules::rules
 * \param parent
 * Class rules will display the USGA.org
 * rules. Initially, we would have like to
 * access our files on the database to view
 * rules when needed. Instead, we opted to
 * go with their (USGA) rules website.
 */
rules::rules(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rules)
{
    int width = 350;
    int height = 450;

    ui->setupUi(this);
    ui->webView->load(QUrl("http://m.usga.org/mt/www.usga.org/Rules.aspx?id=7788"));
    this->setFixedWidth(width);
    this->setFixedHeight(height);
    this->setWindowTitle("Golf App");
}

rules::~rules()
{
    delete ui;
}
