# Rockchip's Single Shot Multibox Detector for Linux

RK3399DEMO_SITE = $(TOPDIR)/../external/rk3399demo
RK3399DEMO_SITE_METHOD = local

define RK3399DEMO_INSTALL_TARGET_CMDS
        $(INSTALL) -D -m 755 $(@D)/rk3399demo $(TARGET_DIR)/usr/bin/
endef

$(eval $(cmake-package))
