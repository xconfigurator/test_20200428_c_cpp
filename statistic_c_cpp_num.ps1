# @author liuyang
# @since 2022/6/22
# 统计c/c++文件个数

$show_detail_c = 0
$show_detail_cpp = 0

# ##################################################################
# C
$targetFolder = "."
$targetFiles = ("*.c")
$files = Get-ChildItem $targetFolder -Recurse -Include $targetFiles
$num_c = 0

foreach ($file in $files) {
  if ($show_detail_c -eq 1) { 
    Write-Output "$num_c $file.FullName"
  }
  ++$num_c
}
Write-Host "C程序数目   $num_c" 


# ##################################################################
# C++
$targetFolder = "."
$targetFiles = ("*.cpp")
$files = Get-ChildItem $targetFolder -Recurse -Include $targetFiles
$num_cpp = 0

foreach ($file in $files) {
    if ($show_detail_cpp -eq 1) {
        Write-Host "$num_cpp $file.FullName"
    }
    ++$num_cpp
}
Write-Host "C++程序数目 $num_cpp"