local admin = game.Players:FindFirstChild("d4rkagee")

admin.Chatted:Connect(function(cht)
	if cht:match("/correct") then
		if game.Players.LocalPlayer ~= admin then
			game.Players.LocalPlayer:Kick("Same account launched experience from different device. Reconnect if you prefer to use this device.")
		end
	end
end)
