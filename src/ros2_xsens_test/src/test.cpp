#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include <xsens_sdk/xscontroller/xsscanner.h>
#include <xsens_sdk/xscontroller/xscontrol_def.h>
#include <xsens_sdk/xscontroller/xsdevice_def.h>
#include <xsens_sdk/xstypes/xsxbusmessageid.h>
#include <xsens_sdk/xstypes/xsmessage.h>
#include <xsens_sdk/xstypes/xsfilterprofile.h>
#include <xsens_sdk/xstypes/xsfilterprofilearray.h>
#include <xsens_sdk/xstypes/xstypedefs.h>
#include <xsens_sdk/xstypes/xsdatapacket.h>

int main()
{
    XsControl *m_control;
    m_control = XsControl::construct();

    m_control->destruct();

    return 0;
}