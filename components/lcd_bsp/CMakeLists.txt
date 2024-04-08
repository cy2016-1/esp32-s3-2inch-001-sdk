idf_component_register(
    SRC_DIRS
        "." 
    INCLUDE_DIRS
        "include"
    REQUIRES 
    driver 
    log
    esp_lcd
    lcd_bsp
    fatfs
    )
target_link_libraries(${COMPONENT_LIB} INTERFACE "${CMAKE_CURRENT_LIST_DIR}/liblcd_bsp.a")