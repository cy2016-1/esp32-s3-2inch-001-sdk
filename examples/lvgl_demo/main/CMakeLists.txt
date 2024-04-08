idf_component_register(
    SRC_DIRS
    "."
    INCLUDE_DIRS
    "include"
    )

target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")

# spiffs_create_partition_image(storage ../spiffs FLASH_IN_PROJECT)


