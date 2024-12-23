file(REMOVE_RECURSE
  "../../qml/labirint/Constants.qml"
  "../../qml/labirint/DirectoryFontLoader.qml"
  "../../qml/labirint/EventListModel.qml"
  "../../qml/labirint/EventListSimulator.qml"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/labirint_tooling.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
